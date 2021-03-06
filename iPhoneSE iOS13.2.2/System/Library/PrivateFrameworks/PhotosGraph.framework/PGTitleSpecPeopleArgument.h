/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)argumentWithPeopleType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)initWithPeopleType:(unsigned long long)arg1 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg1 ;
-(id)_groupTitleWithMomentNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2 ;
-(id)_groupTitleWithFeature:(id)arg1 graph:(id)arg2 allowedGroupsFormat:(unsigned long long)arg3 ;
-(id)_personTitleWithMomentNodes:(id)arg1 ;
-(id)_personTitleWithFeature:(id)arg1 graph:(id)arg2 ;
-(id)_peopleNodesWithMomentNodes:(id)arg1 ;
@end

