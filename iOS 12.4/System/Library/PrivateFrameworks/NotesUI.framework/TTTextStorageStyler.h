/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TTTextStorageStyler <NSObject>
@optional
-(void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4;

@required
-(id)styleForModelAttributes:(id)arg1;
-(id)modelForStyleAttributes:(id)arg1 filterAttributes:(BOOL)arg2;
-(void)styleText:(id)arg1 inRange:(NSRange)arg2 fixModelAttributes:(BOOL)arg3;
-(void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
-(void)resetGuessedFontSizes;

@end
