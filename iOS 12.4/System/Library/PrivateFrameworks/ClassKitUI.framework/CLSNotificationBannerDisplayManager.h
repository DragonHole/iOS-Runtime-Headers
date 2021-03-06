/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject {

	NSDate* _lastBannerTime;

}

@property (nonatomic,retain) NSDate * lastBannerTime;              //@synthesize lastBannerTime=_lastBannerTime - In the implementation block
+(id)shared;
-(void)showPrivacyModalView;
-(void)showBannerWithTitle:(id)arg1 message:(id)arg2 ;
-(NSDate *)lastBannerTime;
-(void)setLastBannerTime:(NSDate *)arg1 ;
@end

