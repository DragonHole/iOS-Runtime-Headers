/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSString, BRContainer;

@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {

	NSString* _cachedSubtitle;
	BRContainer* _container;

}

@property (nonatomic,readonly) BRContainer * container; 
-(id)initWithContainer:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL*)arg3 ;
-(id)title;
-(id)subtitle;
-(long long)type;
-(BRContainer *)container;
-(id)url;
-(id)modificationDate;
@end

