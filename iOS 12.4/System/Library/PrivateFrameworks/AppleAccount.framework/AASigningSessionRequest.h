/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSData;

@interface AASigningSessionRequest : AARequest {

	NSData* _sessionInfoRequestData;

}
+(Class)responseClass;
-(id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2 ;
-(id)urlRequest;
@end
