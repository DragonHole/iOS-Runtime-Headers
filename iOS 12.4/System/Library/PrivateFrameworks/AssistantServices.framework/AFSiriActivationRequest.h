/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@class AFSiriActivationContext;

@interface AFSiriActivationRequest : NSObject <AFSiriExternalRequest> {

	AFSiriActivationContext* _context;

}
-(void)performRequestWithResultHandler:(/*^block*/id)arg1 ;
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

