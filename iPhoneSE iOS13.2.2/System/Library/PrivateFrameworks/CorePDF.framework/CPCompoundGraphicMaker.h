/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPChunk, CPCluster;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {

	CPChunk* parentChunk;
	BOOL shapesAreVectorGraphics;
	unsigned shapeCount;
	id* shapes;
	double pageSpread;
	CPCluster* cluster;
	unsigned groupInfoCount;
	SCD_Struct_CP27* groupInfoArray;
	BOOL disposed;

}
+(BOOL)makeCompoundGraphicsInZonesOf:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2 ;
-(BOOL)makeCompoundGraphics;
-(void)coalesceShapeGroups;
-(void)makeCompoundGraphicFromShapesAtIndex:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)addGroupInfoWithIndex:(unsigned)arg1 bounds:(CGRect)arg2 ;
-(BOOL)makeCompoundGraphicsFromShapeGroups;
-(BOOL)findClusterLevel;
-(BOOL)groupOverlappingGraphics;
@end

