/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
+(id)_messageForProtectionSpace:(id)arg1 ;
+(id)_titleForProtectionSpace:(id)arg1 ;
-(long long)failureCount;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthentication;
-(void)useCredential:(id)arg1 ;
-(BOOL)hasPassword;
-(id)user;
-(id)sender;
-(id)password;
@end
