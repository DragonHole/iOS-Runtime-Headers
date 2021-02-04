/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)_authorsWithResponseDictionary:(id)arg1 ;
-(id)outputBlock;
-(id)_lookupResponseForMissingAuthors:(id)arg1 error:(id*)arg2 ;
-(void)main;
@end
