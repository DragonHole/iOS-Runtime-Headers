/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTPreloadingTask <AVTCancelable>
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler; 
@required
-(void)setCanceled:(BOOL)arg1;
-(id)completionHandler;
-(BOOL)isCanceled;

@end

