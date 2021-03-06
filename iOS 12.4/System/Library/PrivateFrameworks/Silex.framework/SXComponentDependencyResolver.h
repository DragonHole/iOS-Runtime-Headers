/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSDictionary;

@interface SXComponentDependencyResolver : NSObject {

	NSArray* _solvedComponentNodes;
	NSMutableArray* _componentNodes;
	NSDictionary* _mappedComponentNodes;

}

@property (nonatomic,readonly) NSArray * solvedComponentNodes;                   //@synthesize solvedComponentNodes=_solvedComponentNodes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * componentNodes;                  //@synthesize componentNodes=_componentNodes - In the implementation block
@property (nonatomic,readonly) NSDictionary * mappedComponentNodes;              //@synthesize mappedComponentNodes=_mappedComponentNodes - In the implementation block
-(void)addDependency:(id)arg1 ;
-(id)createComponentNodesForComponentIdentifiers:(id)arg1 ;
-(void)addComponentNode:(id)arg1 ;
-(id)componentNodeForComponentIdentifier:(id)arg1 andAttribute:(long long)arg2 ;
-(NSMutableArray *)componentNodes;
-(NSArray *)solvedComponentNodes;
-(id)solvedOrderForComponentNodes:(id)arg1 ;
-(void)resolveStack:(id)arg1 withSolvedNodes:(id)arg2 ;
-(id)initWithComponentIdentifiers:(id)arg1 ;
-(id)solvableOrder;
-(id)componentNodesDependentOnComponentNode:(id)arg1 ;
-(NSDictionary *)mappedComponentNodes;
-(id)debugDescription;
-(void)reset;
@end

