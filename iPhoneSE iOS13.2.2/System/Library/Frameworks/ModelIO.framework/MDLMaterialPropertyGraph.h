/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/MDLMaterialPropertyNode.h>

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode {

	NSArray* _nodes;
	NSArray* _connections;
	NSMutableArray* _finalNodes;

}

@property (nonatomic,readonly) NSArray * nodes;                    //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSArray * connections;              //@synthesize connections=_connections - In the implementation block
-(NSArray *)nodes;
-(NSArray *)connections;
-(id)initWithNodes:(id)arg1 connections:(id)arg2 ;
-(void)evaluate;
@end

