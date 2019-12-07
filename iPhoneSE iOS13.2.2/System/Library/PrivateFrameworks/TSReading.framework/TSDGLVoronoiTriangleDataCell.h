/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDGLVoronoiTriangleDataCell : NSObject {

	unsigned long long _triangleCount;
	unsigned long long _vertexCount;
	SCD_Struct_TS76* _vertexData;
	SCD_Struct_TS77 _centerPoint;
	CGRect _bounds;

}

@property (nonatomic,readonly) unsigned long long triangleCount;              //@synthesize triangleCount=_triangleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS77* vertexData;                   //@synthesize vertexData=_vertexData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS77 centerPoint;                   //@synthesize centerPoint=_centerPoint - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
-(void)dealloc;
-(SCD_Struct_TS77)centerPoint;
-(CGRect)bounds;
-(unsigned long long)vertexCount;
-(unsigned long long)triangleCount;
-(id)initWithTrianglePoints:(SCD_Struct_TS77*)arg1 ;
-(void)p_setupTriangleDataWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >*)arg1 ;
-(id)cellsBySplittingCellIntoTriangles;
-(id)initWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double> > >*)arg1 ;
-(SCD_Struct_TS77*)vertexData;
@end
