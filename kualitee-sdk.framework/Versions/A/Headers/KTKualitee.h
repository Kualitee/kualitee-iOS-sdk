//
//  KTKualitee.h
//  kualitee-sdk
//
//  Created by Zohaib ehsan on 20/10/2016.
//  Copyright © 2016 Virtual-Force. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface KTKualitee : NSObject

+ (KTKualitee *)initilizeSDK;

- (UIImage *)currentScreenshot;

- (void)saveImage:(UIImage *)img;

- (UIImage *)getImage;

@end
