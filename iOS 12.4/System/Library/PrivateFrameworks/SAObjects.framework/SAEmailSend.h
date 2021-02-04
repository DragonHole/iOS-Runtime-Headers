/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAEmailEmail;

@interface SAEmailSend : SADomainCommand

@property (nonatomic,retain) SAEmailEmail * email; 
+(id)sendWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)send;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAEmailEmail *)email;
-(void)setEmail:(SAEmailEmail *)arg1 ;
-(id)groupIdentifier;
@end
