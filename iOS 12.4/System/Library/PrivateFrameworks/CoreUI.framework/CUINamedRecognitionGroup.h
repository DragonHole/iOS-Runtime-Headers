/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUINamedLookup.h>

@class NSMutableDictionary;

@interface CUINamedRecognitionGroup : CUINamedLookup {

	NSMutableDictionary* _imageContents;
	NSMutableDictionary* _objectContents;

}
-(id)initWithName:(id)arg1 contentsFromCatalog:(id)arg2 usingRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4 ;
-(id)namedRecognitionItemList;
-(id)recognitionItemsWithName:(id)arg1 ;
-(id)namedRecognitionImageImageList;
-(id)recognitionImageWithName:(id)arg1 ;
-(id)namedRecognitionObjectObjectList;
-(id)recognitionObjectWithName:(id)arg1 ;
-(void)dealloc;
@end

