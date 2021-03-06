/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <NSSecureCoding> {

	UIBoundingPathBitmapDataCorner* _referenceCorner;

}
+(BOOL)supportsSecureCoding;
+(id)cachedReferenceCornerForRadius:(long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBoundingPathBitmapDataCorner*)referenceCornerCopy;
-(id)initWithReferenceCorner:(UIBoundingPathBitmapDataCorner*)arg1 ;
@end

