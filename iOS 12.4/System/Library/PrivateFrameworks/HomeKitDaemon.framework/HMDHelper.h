/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDHelperExternalProtocol;
@interface HMDHelper : NSObject {

	id<HMDHelperExternalProtocol> _externalProtocol;

}

@property (nonatomic,retain) id<HMDHelperExternalProtocol> externalProtocol;              //@synthesize externalProtocol=_externalProtocol - In the implementation block
+(void)setSharedHelper:(id)arg1 ;
+(id)sharedHelper;
-(id)initWithExternalProtocol:(id)arg1 ;
-(id)hashedRouteIDForIdentifier:(id)arg1 ;
-(id<HMDHelperExternalProtocol>)externalProtocol;
-(void)setExternalProtocol:(id<HMDHelperExternalProtocol>)arg1 ;
@end

