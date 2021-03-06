/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIEmergencyCallServiceInterface.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface> {

	long long _backgroundStyle;
	UIColor* _tintColor;

}

@property (assign,nonatomic) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)backgroundStyle:(/*^block*/id)arg1 ;
-(void)noteTintColorForBackgroundStyleChanged:(id)arg1 ;
-(void)noteViewMovedOffscreenTemporarily;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIColor *)tintColor;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
@end

