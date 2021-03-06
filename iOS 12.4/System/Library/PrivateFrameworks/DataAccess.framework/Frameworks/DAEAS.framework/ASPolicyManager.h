/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASPolicyManagerDelegate;
@interface ASPolicyManager : NSObject {

	BOOL _updatingPolicy;
	id<ASPolicyManagerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL updatingPolicy;                                      //@synthesize updatingPolicy=_updatingPolicy - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAccount:(id)arg1 ;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(id)currentPolicyKey;
-(BOOL)updatingPolicy;
-(void)requestPolicyUpdate;
-(void)setUpdatingPolicy:(BOOL)arg1 ;
-(void)setDelegate:(id<ASPolicyManagerDelegate>)arg1 ;
-(id<ASPolicyManagerDelegate>)delegate;
@end

