/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <Foundation/NSValueTransformer.h>

@interface VSImageScaleValueTransformer : NSValueTransformer {

	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;              //@synthesize preferredSize=_preferredSize - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
@end

