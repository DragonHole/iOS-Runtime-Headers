/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {

	vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >* _strokes;
	BOOL _continuePreviousStroke;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)totalNumberOfPoints;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPoint:(CGPoint)arg1 ;
-(void)endStroke;
-(void)removeAllStrokes;
-(unsigned long long)numberOfStrokes;
-(void)removeStrokeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)arg1 ;
-(CGPoint)pointAtIndex:(unsigned long long)arg1 inStrokeAtIndex:(unsigned long long)arg2 ;
@end

