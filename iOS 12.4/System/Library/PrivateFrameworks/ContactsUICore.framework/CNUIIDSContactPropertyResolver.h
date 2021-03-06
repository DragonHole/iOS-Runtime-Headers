/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIIDSAvailabilityProvider;

@interface CNUIIDSContactPropertyResolver : NSObject {

	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;

}

@property (nonatomic,readonly) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
+(id)IDSRelevantPropertiesForContact:(id)arg1 ;
+(id)descriptorForRequiredKeys;
-(id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(/*^block*/id)arg3 ;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id)initWithIDSAvailabilityProvider:(id)arg1 ;
-(id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 ;
@end

