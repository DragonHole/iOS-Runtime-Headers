/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableSet;

@interface PGPet : NSObject {

	NSSet* _owners;
	NSMutableSet* _momentNodes;

}

@property (nonatomic,retain) NSSet * owners;                      //@synthesize owners=_owners - In the implementation block
@property (nonatomic,retain) NSMutableSet * moments;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(NSMutableSet *)moments;
-(void)setMoments:(NSMutableSet *)arg1 ;
-(NSSet *)owners;
-(void)setOwners:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

