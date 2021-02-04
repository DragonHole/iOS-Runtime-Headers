/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying> {

	double _itemEdgeSize;
	double _itemSpacing;

}

@property (nonatomic,readonly) double itemEdgeSize;              //@synthesize itemEdgeSize=_itemEdgeSize - In the implementation block
@property (nonatomic,readonly) double itemSpacing;               //@synthesize itemSpacing=_itemSpacing - In the implementation block
-(id)_initWithLayoutOptions:(id)arg1 ;
-(double)itemEdgeSize;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)itemSpacing;
@end
