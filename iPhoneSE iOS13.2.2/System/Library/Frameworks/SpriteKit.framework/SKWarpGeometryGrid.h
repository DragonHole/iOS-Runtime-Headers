/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKWarpGeometry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SKWarpGeometryGrid : SKWarpGeometry <NSSecureCoding> {

	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _sourcePositions;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _destPositions;
	 _dimensions;
	int _vertexCount;
	BOOL _isIdentityWarp;

}

@property (nonatomic,readonly) const * sourcePositions; 
@property (nonatomic,readonly) const * destPositions; 
@property (nonatomic,readonly) long long numberOfColumns; 
@property (nonatomic,readonly) long long numberOfRows; 
@property (nonatomic,readonly) long long vertexCount; 
+(BOOL)supportsSecureCoding;
+(id)grid;
+(id)gridWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const 3*)arg3 destPositions:(const 4*)arg4 ;
+(id)gridWithColumns:(long long)arg1 rows:(long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfColumns;
-(long long)numberOfRows;
-(long long)vertexCount;
-(BOOL)isIdentityWarp;
-(const *)destPositions;
-(const *)sourcePositions;
-(id)initWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const 3*)arg3 destPositions:(const 4*)arg4 ;
-(BOOL)isEqualToGrid:(id)arg1 ;
-(2)sourcePositionAtIndex:(long long)arg1 ;
-(2)destPositionAtIndex:(long long)arg1 ;
-(id)gridByReplacingSourcePositions:(const 1*)arg1 ;
-(id)gridByReplacingDestPositions:(const 1*)arg1 ;
@end
