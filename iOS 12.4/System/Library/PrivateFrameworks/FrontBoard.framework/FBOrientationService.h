/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBOrientationServiceServer;

@interface FBOrientationService : NSObject {

	FBOrientationServiceServer* _server;

}
+(id)sharedInstance;
-(void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 ;
-(id)init;
@end

