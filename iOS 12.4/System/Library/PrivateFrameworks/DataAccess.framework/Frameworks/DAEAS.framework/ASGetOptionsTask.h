/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASGetOptionsTask : ASTask {

	NSArray* _versionArray;
	NSArray* _commandArray;

}
+(void)__setUsePort:(BOOL)arg1 ;
-(id)httpMethod;
-(int)commandCode;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(id)_url;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(void)setVersionArray:(id)arg1 ;
-(void)setCommandArray:(id)arg1 ;
-(id)commandArray;
-(id)versionArray;
-(void)finishWithError:(id)arg1 ;
@end

