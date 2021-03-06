/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASPolicyManager.h>
#import <libobjc.A.dylib/ASPolicyPreflighterDelegate.h>

@class ASAccount, ASPolicyPreflighter;

@interface ASDaemonPolicyManager : ASPolicyManager <ASPolicyPreflighterDelegate> {

	ASAccount* _account;
	ASPolicyPreflighter* _preflighter;

}

@property (assign,nonatomic,__weak) ASAccount * account;                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ASPolicyPreflighter * preflighter;              //@synthesize preflighter=_preflighter - In the implementation block
-(id)initWithAccount:(id)arg1 ;
-(void)requestPolicyUpdate;
-(void)preflighter:(id)arg1 error:(id)arg2 ;
-(void)preflighterRemoteWipeRequested:(id)arg1 ;
-(void)preflighterAccountOnlyRemoteWipeRequested:(id)arg1 ;
-(void)preflighter:(id)arg1 needsComplianceWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 ;
-(void)preflighter:(id)arg1 successWithMCFeatures:(id)arg2 perAccountPolicies:(id)arg3 policyKey:(id)arg4 ;
-(void)preflighterRemoteWipeRequestResponseAcknowledged:(id)arg1 ;
-(void)preflighterAccountOnlyRemoteWipeRequestResponseAcknowledged:(id)arg1 ;
-(void)_populateCurrentPolicyWithError:(id)arg1 ;
-(void)_tearDownPreflighter;
-(int)_preflightEDUModeMCFeatures:(id)arg1 ;
-(ASPolicyPreflighter *)preflighter;
-(void)setPreflighter:(ASPolicyPreflighter *)arg1 ;
-(ASAccount *)account;
-(void)setAccount:(ASAccount *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
@end

