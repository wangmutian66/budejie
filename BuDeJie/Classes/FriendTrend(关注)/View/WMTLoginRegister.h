//
//  WMTLoginRegister.h
//  BuDeJie
//
//  Created by wangmutian on 2017/12/27.
//  Copyright © 2017年 wangmutian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMTLoginRegister : UIView
@property (weak, nonatomic) IBOutlet UIButton *btnlogin;


+(instancetype) loginView;
+(instancetype) registerView;

@end
