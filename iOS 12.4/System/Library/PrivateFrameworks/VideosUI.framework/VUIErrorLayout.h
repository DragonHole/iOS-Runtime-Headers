/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUIErrorLayout : TVViewLayout {

	VUITextLayout* _titleTextLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _debugTextLayout;
	VUITextLayout* _debugTextLayout2;

}

@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                    //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * debugTextLayout;                    //@synthesize debugTextLayout=_debugTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * debugTextLayout2;                   //@synthesize debugTextLayout2=_debugTextLayout2 - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(VUITextLayout *)titleTextLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)debugTextLayout;
-(VUITextLayout *)debugTextLayout2;
@end

