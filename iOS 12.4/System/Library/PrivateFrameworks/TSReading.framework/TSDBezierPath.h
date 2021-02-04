/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TSDBezierPath : NSObject <NSCopying, NSSecureCoding> {

	long long sfr_elementCount;
	long long sfr_elementMax;
	PATHSEGMENT* sfr_head;
	double* sfr_elementLength;
	double sfr_totalLength;
	long long sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	double sfr_lineWidth;
	CGRect sfr_controlPointBounds;
	double sfr_miterLimit;
	double sfr_flatness;
	double* sfr_dashedLinePattern;
	unsigned long long sfr_dashedLineCount;
	double sfr_dashedLinePhase;
	void* sfr_path;
	long long sfr_extraSegmentCount;
	long long sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}

@property (nonatomic,readonly) BOOL isCompound; 
@property (nonatomic,readonly) BOOL isSelfIntersecting; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL isLineSegment; 
@property (nonatomic,readonly) BOOL isEffectivelyClosed; 
@property (nonatomic,readonly) BOOL containsClosePathElement; 
+(unsigned long long)windingRule;
+(void)setWindingRule:(unsigned long long)arg1 ;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
+(id)outsideEdgeOfBezierPath:(id)arg1 ;
+(id)tracedPathForImage:(CGImageRef)arg1 alphaThreshold:(double)arg2 pointSpacing:(double)arg3 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(double)arg1 ;
+(double)defaultMiterLimit;
+(void)setDefaultFlatness:(double)arg1 ;
+(double)defaultFlatness;
+(void)setDefaultWindingRule:(unsigned long long)arg1 ;
+(unsigned long long)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(double)arg1 ;
+(double)defaultLineWidth;
+(id)uniteBezierPaths:(id)arg1 ;
+(id)outlineBezierPath:(id)arg1 withThreshold:(double)arg2 ;
+(id)outlineBezierPath:(id)arg1 ;
+(id)subtractBezierPaths:(id)arg1 ;
+(id)intersectBezierPaths:(id)arg1 ;
+(id)bezierPathWithConvexHullOfPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)p_booleanWithBezierPaths:(id)arg1 operation:(int)arg2 ;
+(Path*)p_bezierToPath:(id)arg1 ;
+(id)p_pathToBezier:(Path*)arg1 ;
+(id)excludeBezierPaths:(id)arg1 ;
+(id)appendBezierPaths:(id)arg1 ;
+(id)exteriorOfBezierPath:(id)arg1 ;
+(id)smoothBezierPath:(id)arg1 withThreshold:(double)arg2 ;
+(CGRect)p_pathToBounds:(Path*)arg1 ;
+(id)tracedPathForInstantAlphaBinaryBitmap:(id)arg1 pointSpacing:(double)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(void)setLineWidth:(double)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(double)lineWidth;
+(id)bezierPath;
+(unsigned long long)lineCapStyle;
+(void)setLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned long long)arg1 ;
+(double)miterLimit;
+(void)setMiterLimit:(double)arg1 ;
+(double)flatness;
+(void)setFlatness:(double)arg1 ;
+(void)fillRect:(CGRect)arg1 ;
+(void)strokeRect:(CGRect)arg1 ;
-(BOOL)isOpen;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)intersectsRect:(CGRect)arg1 hasFill:(BOOL)arg2 ;
-(CGRect)boundsIncludingTSDStroke:(id)arg1 ;
-(CGRect)boundsIncludingStroke;
-(id)outlineStroke;
-(id)chisel;
-(unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint*)arg2 ;
-(long long)elementCount;
-(unsigned long long)elementAtIndex:(long long)arg1 allPoints:(CGPoint*)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(BOOL)arg3 reversed:(BOOL)arg4 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(BOOL)arg6 ;
-(unsigned long long)windingRule;
-(void)setWindingRule:(unsigned long long)arg1 ;
-(double)lengthOfElement:(long long)arg1 ;
-(CGPoint)rawGradientAt:(float)arg1 fromElement:(long long)arg2 ;
-(long long)elementPercentage:(float*)arg1 forOverallPercentage:(float)arg2 ;
-(CGPoint)gradientAt:(double)arg1 fromElement:(long long)arg2 ;
-(CGPoint)pointAt:(double)arg1 fromElement:(long long)arg2 ;
-(float)elementPercentageFromElement:(int)arg1 forOverallPercentage:(float)arg2 ;
-(double)curvatureAt:(double)arg1 fromElement:(int)arg2 ;
-(CGPoint)transformedTotalCoordinate:(CGPoint)arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 withPressure:(id)arg4 getElement:(long long*)arg5 getPercentage:(float*)arg6 ;
-(CGPoint)myGradientAt:(float)arg1 fromElement:(long long)arg2 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGPoint)arg2 inElementRange:(NSRange)arg3 into:(id)arg4 ;
-(double)lengthToElement:(long long)arg1 ;
-(void)getStartPoint:(CGPoint*)arg1 andEndPoint:(CGPoint*)arg2 ;
-(void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 ;
-(void)addIntersectionsWithLine:(CGPoint)arg1 to:(id)arg2 ;
-(void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3 ;
-(id)copyFromSegment:(int)arg1 t:(float)arg2 toSegment:(int)arg3 t:(float)arg4 ;
-(CGPoint)nearestPointOnPathToLine:(CGPoint)arg1 ;
-(CGPoint)nearestAngleOnPathToLine:(CGPoint)arg1 ;
-(id)pressure;
-(CGPoint)gradientAt:(float)arg1 ;
-(CGPoint)transformedCoordinate:(CGPoint)arg1 withPressure:(id)arg2 ;
-(CGPoint)transformedTotalCoordinate:(CGPoint)arg1 inElement:(long long)arg2 withPressure:(id)arg3 ;
-(CGPoint)myGradientAt:(float)arg1 ;
-(float)curvatureAt:(float)arg1 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2 ;
-(void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CGPoint)arg2 into:(id)arg3 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
-(BOOL)isLineSegment;
-(id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2 ;
-(id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 withThreshold:(double)arg3 ;
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 ;
-(void)takeAttributesFromStroke:(id)arg1 ;
-(BOOL)isEffectivelyClosed;
-(id)uniteWithBezierPath:(id)arg1 ;
-(CGRect)controlPointBounds;
-(id)aliasedPathInContext:(CGContextRef)arg1 effectiveStrokeWidth:(float)arg2 ;
-(id)intersectBezierPath:(id)arg1 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(void)_doPath;
-(unsigned long long)elementAtIndex:(long long)arg1 ;
-(BOOL)isFlat;
-(id)bezierPathByRemovingRedundantElements;
-(double)calculateLengthOfElement:(long long)arg1 ;
-(void)calculateLengths;
-(void)_appendToPath:(id)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(BOOL)isTriangular;
-(BOOL)isDiamond;
-(BOOL)isClockwise;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(long long)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3 ;
-(const char*)cString;
-(id)initWithCString:(const char*)arg1 ;
-(void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2 ;
-(double)yValueFromXValue:(double)arg1 elementIndex:(long long*)arg2 parametricValue:(double*)arg3 ;
-(CGRect)boundsIncludingStrokeWidth:(double)arg1 joinStyle:(unsigned long long)arg2 capStyle:(unsigned long long)arg3 miterLimit:(double)arg4 needsToExtendJoins:(BOOL)arg5 ;
-(BOOL)containsClosePathElement;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5 ;
-(id)subtractBezierPath:(id)arg1 ;
-(void)addPathToContext:(CGContextRef)arg1 ;
-(id)p_aliasedPathInContext:(CGContextRef)arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3 ;
-(id)pathBySplittingAtPointOnPath:(CGPoint)arg1 ;
-(double)yValueFromXValue:(double)arg1 ;
-(void)alignBoundsToOrigin;
-(BOOL)isCompound;
-(BOOL)isSelfIntersecting;
-(CGRect)_addMitersFromSegments:(id)arg1 toRect:(CGRect)arg2 ;
-(BOOL)pointOnPath:(CGPoint)arg1 tolerance:(double)arg2 ;
-(CGPoint)pointAlongPathAtPercentage:(double)arg1 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5 ;
-(id)p_pathAsSegments;
-(id)p_beziersFromSegmentIntersections:(id)arg1 ;
-(void)clearStroke:(CGContextRef)arg1 ;
-(id)pathByWobblingByUpTo:(double)arg1 subdivisions:(unsigned long long)arg2 ;
-(CGPoint)roundPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 strokeWidth:(int)arg3 ;
-(id)bezierPathByFittingCurve:(id)arg1 ;
-(id)bezierPathByFittingCurve;
-(double)length;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPathRef)CGPath;
-(void)fill;
-(BOOL)isEmpty;
-(void)stroke;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)addClip;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(CGPoint)currentPoint;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(unsigned long long)lineCapStyle;
-(void)setLineCapStyle:(unsigned long long)arg1 ;
-(unsigned long long)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned long long)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
@end
