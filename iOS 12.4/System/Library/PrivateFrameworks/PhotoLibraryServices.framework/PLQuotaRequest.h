/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString;

@interface PLQuotaRequest : AARequest {

	NSString* _authToken;
	NSString* _personID;

}
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3 ;
@end

