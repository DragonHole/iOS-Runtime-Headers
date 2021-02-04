/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADLayoutOptions : NSObject <NSCopying> {

	CGSize _containerSize;
	CGSize _reorientedContainerSize;

}

@property (assign,nonatomic) CGSize containerSize;                        //@synthesize containerSize=_containerSize - In the implementation block
@property (assign,nonatomic) CGSize reorientedContainerSize;              //@synthesize reorientedContainerSize=_reorientedContainerSize - In the implementation block
-(CGSize)reorientedContainerSize;
-(void)setReorientedContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
@end
