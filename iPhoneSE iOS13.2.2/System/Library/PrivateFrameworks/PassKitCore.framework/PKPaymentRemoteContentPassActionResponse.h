/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse {

	PKPaymentPassAction* _updatedAction;

}

@property (nonatomic,retain) PKPaymentPassAction * updatedAction;              //@synthesize updatedAction=_updatedAction - In the implementation block
-(id)initWithExistingAction:(id)arg1 data:(id)arg2 ;
-(PKPaymentPassAction *)updatedAction;
-(void)setUpdatedAction:(PKPaymentPassAction *)arg1 ;
@end

