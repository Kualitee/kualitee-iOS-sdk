# **KUALITEE-SDK**

A stress-free Project Management is a tester’s dream. Let Kualitee help you manage your testing activities without getting tangled in different documents. Create your own testing project and sync it with your testing requirements. Not just that, you can define your testing team by adding users who can also view the results and make status updates after bug fixes.
	

## **Getting Started**

**Requirements**

1. iOS 10.0+ / macOS 10.12+ / tvOS 10.0+ / watchOS 3.0+
1. Xcode 10.1+
1. Swift 4.2+


**Prerequisites**

You need to install Kualitee Application from AppStore. 
If you don't have Kualitee App installed, download from [here](https://itunes.apple.com/in/app/kualitee/id404166406)

**Installing**

**CocoaPods**

CocoaPods is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website. To integrate KualiteeSDK into your Xcode project using CocoaPods, specify it in your Podfile:

	platform :ios, '10.0'
	target '{Your_target}' do
		use_frameworks!
		
		pod 'KualiteeSDK', '~> 0.1.9'
	end

**Manually**

Download our latest SDK from [here](https://github.com/Kualitee/kualitee-iOS-sdk/blob/master/KualiteeSDK.zip).
Unzip the downloaded file and drag/drop the extracted framework file to your project.
Select your *Target*, goto *General* and naviate to *Embedded Libraries*. click on *+* icon and select *KualiteeSDK.framework* file.

**Integration**

**Note**: Open info.plist file of your target and copy/paste the following code snippet to ensure your Application can open Kualitee Application otherwise Kualitee Application will not be redirected to.

	<key>LSApplicationQueriesSchemes</key>
		<array>
			<string>x-kualitee</string>
		</array>

**Swift**

For integration with Swift, type this code snippet in AppDelegate.swift file of your project.

	import KualiteeSDK
	
	func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {     
	   KualiteeSDK.configure()
	   return true
	}
	
	func applicationWillResignActive(_ application: UIApplication) {
	    KualiteeSDK.resign()
	}
	
	func applicationDidEnterBackground(_ application: UIApplication) {
	    KualiteeSDK.resign()
	}
	
	func applicationDidBecomeActive(_ application: UIApplication) {
	    KualiteeSDK.configure()
	}
	
	func applicationWillTerminate(_ application: UIApplication) {
	    KualiteeSDK.resign()
	}


**Objective-C**

For integration with Objective-C: 

1. Goto "*Build Settings*" of Target, Navigate to "*Packaging*" and Set "*Defines Module*" -> "*Yes*".
1. Goto "*Build Settings*" of Target, Navigate to "*Build Options*" and Set "*Always Embed Swift Standard Libraries*" -> "*Yes*", otherwise project/target will not allow standard swift libraries to compile.

In AppDelegate.h file:
@class KualiteeSDK;

In AppDelegate.m file:

	#import <KualiteeSDK/KualiteeSDK-Swift.h>
	
	@implementation AppDelegate
	
	- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
	    // Override point for customization after application launch.
	    
	    [KualiteeSDK configure];
	    
	    return YES;
	}
	
	- (void)applicationWillResignActive:(UIApplication *)application {
	    [KualiteeSDK resign];
	}
	
	- (void)applicationDidEnterBackground:(UIApplication *)application {
	    [KualiteeSDK resign];
	}
	
	- (void)applicationDidBecomeActive:(UIApplication *)application {
	    [KualiteeSDK configure];
	}
	
	- (void)applicationWillTerminate:(UIApplication *)application {
	    [KualiteeSDK resign];
    }
    end

**Reporting a Bug**

For bug reporting, simply just shake the application. Kualitee SDK will capture a Screenshot and present and Image Markup Editr. After you are done editing, you will be redirected to Kualitee Application for defect log.

