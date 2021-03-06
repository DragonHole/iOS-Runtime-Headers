/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage;


@protocol CKInvisibleInkEffectHostView
@property (nonatomic,readonly) Class invisibleInkEffectViewClass; 
@property (nonatomic,readonly) UIImage * imageForInvisibleInkEffectView; 
@required
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasResumed;
-(UIImage *)imageForInvisibleInkEffectView;

@end

