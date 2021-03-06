/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LAPasscodeHelper : NSObject
+(id)sharedInstance;
-(unsigned)_keybagHandleForUserId:(id)arg1 ;
-(BOOL)isPasscodeSetWithError:(id*)arg1 ;
-(long long)verifyPassword:(id)arg1 acmContext:(id)arg2 userId:(id)arg3 ;
-(long long)createStash:(id)arg1 mode:(int)arg2 manifest:(id)arg3 ;
-(long long)passcodeScreenStyleWithPolicy:(long long)arg1 options:(id)arg2 ;
@end

