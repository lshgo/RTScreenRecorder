//
//  ViewController.h
//  RTScreenRecorder
//
//  Created by 叔 陈 on 16/3/23.
//  Copyright © 2016年 RavenTech. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "RTScreenRecorder.h"

@interface ViewController : NSViewController

@property (weak) IBOutlet NSImageView *imageView;
@property (strong) RTScreenRecorder *recorder;

@end

