/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, HKConceptIdentifier;

@interface HDHealthOntologyManagerConceptSampleRelationship : NSObject {

	NSUUID* _sampleUUID;
	HKConceptIdentifier* _conceptIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * sampleUUID;                                  //@synthesize sampleUUID=_sampleUUID - In the implementation block
@property (nonatomic,copy,readonly) HKConceptIdentifier * conceptIdentifier;              //@synthesize conceptIdentifier=_conceptIdentifier - In the implementation block
-(id)init;
-(NSUUID *)sampleUUID;
-(HKConceptIdentifier *)conceptIdentifier;
-(id)initWithSampleUUID:(id)arg1 conceptIdentifier:(id)arg2 ;
@end
