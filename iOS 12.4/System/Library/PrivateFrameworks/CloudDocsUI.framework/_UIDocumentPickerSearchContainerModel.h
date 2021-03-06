/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _queryString;

}

@property (nonatomic,copy) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(id)scopes;
-(id)displayTitle;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)startMonitoringChanges;
-(void)_updateObserverForQuery;
-(BOOL)shouldShowTopLevelContainers;
-(UIArrayController*)_createObserver;
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
@end

