/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentRequest, NSString;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {

	PKPaymentRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)validatedClass;
+(id)validatorWithObject:(id)arg1 ;
-(BOOL)_checkTotal:(id)arg1 error:(id*)arg2 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
@end
