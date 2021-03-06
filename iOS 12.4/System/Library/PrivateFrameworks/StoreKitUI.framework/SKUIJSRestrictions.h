/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSRestrictions.h>

@protocol SKUIJSRestrictions <JSExport>
@required
-(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1;
-(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1;
-(void)isRestrictionsPasscodeSet:(id)arg1;
-(void)setAllowExplicitContent;
-(void)didDisplayExplicitRestrictionAlertOfType:(id)arg1;
-(BOOL)isRestrictedApp:(id)arg1;
-(void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1 :(id)arg2;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions> {

	SKUIClientContext* _clientContext;

}
-(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1 ;
-(void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1 ;
-(void)isRestrictionsPasscodeSet:(id)arg1 ;
-(void)setAllowExplicitContent;
-(long long)_explicitRestrictionAlertTypeForTypeString:(id)arg1 ;
-(void)didDisplayExplicitRestrictionAlertOfType:(id)arg1 ;
-(BOOL)isRestrictedApp:(id)arg1 ;
-(void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1 :(id)arg2 ;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
@end

