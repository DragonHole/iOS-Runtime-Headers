/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsUI/NewsUI-Structs.h>
@interface NULayoutResolver : NSObject {

	NULayoutOptions _options;

}

@property (nonatomic,readonly) NULayoutOptions options;              //@synthesize options=_options - In the implementation block
-(void)layoutComponents:(id)arg1 inBounds:(CGRect)arg2 originOffset:(CGPoint)arg3 layoutContext:(id)arg4 ;
-(UIEdgeInsets)adjustedEdgeInsetsForOptions:(NULayoutOptions)arg1 ;
-(id)adjustedComponentsForComponents:(id)arg1 options:(NULayoutOptions)arg2 ;
-(NULayoutOptions)options;
-(id)initWithOptions:(NULayoutOptions)arg1 ;
@end

