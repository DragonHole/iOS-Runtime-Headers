/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BSPathProviding;
@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {

	id<BSPathProviding> _containerPathProvider;

}

@property (nonatomic,retain) id<BSPathProviding> containerPathProvider;              //@synthesize containerPathProvider=_containerPathProvider - In the implementation block
+(id)optionsWithContainerPathProvider:(id)arg1 ;
-(void)setContainerPathProvider:(id<BSPathProviding>)arg1 ;
-(id<BSPathProviding>)containerPathProvider;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

