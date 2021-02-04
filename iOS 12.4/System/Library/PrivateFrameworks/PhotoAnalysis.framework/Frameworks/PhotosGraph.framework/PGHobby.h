/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableSet;

@interface PGHobby : NSObject {

	long long _type;
	NSSet* _persons;
	NSMutableSet* _momentNodes;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSSet * persons;                     //@synthesize persons=_persons - In the implementation block
@property (nonatomic,retain) NSMutableSet * moments;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(NSMutableSet *)moments;
-(void)setMoments:(NSMutableSet *)arg1 ;
-(NSSet *)persons;
-(void)setPersons:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end
