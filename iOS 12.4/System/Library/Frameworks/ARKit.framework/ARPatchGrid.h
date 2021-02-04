/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKit/ARKit-Structs.h>
@interface ARPatchGrid : NSObject {

	vector<ARPatch, std::__1::allocator<ARPatch> >* _patchesVector;
	float _angle;

}

@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) const compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* patches; 
@property (nonatomic,readonly) float pivot; 
-(float)pivot;
-(id)initWithPatchesVector:(vector<ARPatch, std::__1::allocator<ARPatch> >*)arg1 pivotAngle:(float)arg2 ;
-(const compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >*)patches;
-(unsigned long long)size;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
