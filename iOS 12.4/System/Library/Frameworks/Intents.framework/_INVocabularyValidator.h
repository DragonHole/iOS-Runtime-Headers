/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _INVocabularyValidator : NSObject
+(void)initialize;
-(void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_validatedItemsFromVocabularyObject:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 withItemFactory:(/*^block*/id)arg4 ;
-(unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1 ;
-(id)_intentsUsingVocabularyType:(long long)arg1 ;
-(void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2 ;
-(void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 ;
-(id)validatedItemsFromVocabularySpeakables:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 ;
@end
