/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _nodes;
	GKCGraph* _cGraph;
	NSMutableDictionary* __info;

}

@property (nonatomic,retain) NSMutableDictionary * _info;              //@synthesize _info=__info - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
+(id)graph;
+(id)graphWithNodes:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)addNodes:(id)arg1 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(GKCGraph*)makeCGraph;
-(GKCGraph*)cGraph;
-(id)nodesMut;
-(void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)findPathFromNode:(id)arg1 toNode:(id)arg2 ;
-(id)initWithNodes:(id)arg1 ;
-(NSArray *)nodes;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)_info;
-(void)removeNodes:(id)arg1 ;
@end

