/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHPolygon : NSObject {

	double _area;
	long long _vertexCount;
	CGPoint* _vertices;

}

@property (assign,nonatomic) double area;                          //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) long long vertexCount;              //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) CGPoint* vertices;                  //@synthesize vertices=_vertices - In the implementation block
+(id)_sutherlandHodgmanClipForSubjectPolygon:(id)arg1 usingClipPolygon:(id)arg2 ;
+(CGPoint*)_clipForPolygon:(id)arg1 clippingEdge:(CHPolygonEdge)arg2 clippedPolygonVertexCount:(long long*)arg3 ;
+(CGPoint)_intersectionPointWithClippingEdge:(CHPolygonEdge)arg1 withPolygonEdge:(CHPolygonEdge)arg2 ;
-(id)description;
-(CGPoint*)vertices;
-(double)area;
-(void)setArea:(double)arg1 ;
-(long long)vertexCount;
-(id)initWithVertices:(CGPoint*)arg1 vertexCount:(long long)arg2 ;
-(id)polygonDrawing;
-(id)polygonByIntersectingWithClipPolygon:(id)arg1 ;
@end

