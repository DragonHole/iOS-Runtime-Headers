/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISDialogOperationDelegate.h>

@class SKUIRedeemViewControllerLegacy, NSString;

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate> {

	/*^block*/id _resultBlock;
	SKUIRedeemViewControllerLegacy* _redeemViewController;

}

@property (copy) id resultBlock;                                                                        //@synthesize resultBlock=_resultBlock - In the implementation block
@property (assign,nonatomic,__weak) SKUIRedeemViewControllerLegacy * redeemViewController;              //@synthesize redeemViewController=_redeemViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRedeemViewController:(SKUIRedeemViewControllerLegacy *)arg1 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(id)_authenticationContext;
-(SKUIRedeemViewControllerLegacy *)redeemViewController;
-(id)_subOperationWithBagKey:(id)arg1 ;
-(void)_logResultsForSuccess:(BOOL)arg1 shouldVerify:(BOOL)arg2 failureReason:(id)arg3 error:(id)arg4 ;
-(BOOL)_performAuthentication;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(void)main;
@end
