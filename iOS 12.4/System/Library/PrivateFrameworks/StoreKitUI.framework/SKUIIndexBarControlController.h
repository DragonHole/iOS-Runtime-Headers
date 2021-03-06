/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIIndexBarControlDataSource.h>
#import <libobjc.A.dylib/SKUIIndexBarControlDelegate.h>

@protocol SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate;
@class SKUIIndexBarEntryDescriptor, NSMapTable, SKUIIndexBarControl, SKUIResourceLoader, NSString;

@interface SKUIIndexBarControlController : NSObject <SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate> {

	SKUIIndexBarEntryDescriptor* _combinedEntryDescriptor;
	NSMapTable* _entryDescriptorToCachedEntry;
	BOOL _hasValidCombinedEntryDescriptor;
	NSMapTable* _indexPathToEntryDescriptor;
	NSMapTable* _requestIDToDescriptors;
	struct {
		unsigned dataSourceRespondsToCombinedEntry : 1;
		unsigned dataSourceRespondsToNumberOfSections : 1;
		unsigned delegateRespondsToDidSelectEntryAtIndexPath : 1;
		unsigned delegateRespondsToDidSelectBeyondBottom : 1;
		unsigned delegateRespondsToDidSelectBeyondTop : 1;
	}  _dataSourceDelegateFlags;
	id<SKUIIndexBarControlControllerDataSource> _dataSource;
	id<SKUIIndexBarControlControllerDelegate> _delegate;
	SKUIIndexBarControl* _indexBarControl;
	SKUIResourceLoader* _resourceLoader;

}

@property (assign,nonatomic,__weak) id<SKUIIndexBarControlControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIIndexBarControlControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUIIndexBarControl * indexBarControl;                                    //@synthesize indexBarControl=_indexBarControl - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                                        //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(SKUIIndexBarControl *)indexBarControl;
-(id)initWithIndexBarControl:(id)arg1 ;
-(void)_artworkRequestDidLoadImageNotification:(id)arg1 ;
-(void)_cancelLoadForEntryDescriptors:(id)arg1 ;
-(id)_combinedEntryDescriptor;
-(id)_entryForEntryDescriptor:(id)arg1 loadingIfNeeded:(BOOL)arg2 ;
-(id)_entryDescriptorAtIndexPath:(id)arg1 ;
-(void)_finishLoadForRequestID:(id)arg1 withResultingImage:(id)arg2 ;
-(id)_URLForEntryDescriptor:(id)arg1 ;
-(void)_configureEntry:(id)arg1 withEntryDescriptor:(id)arg2 ;
-(id)_cachedEntryForEntryDescriptor:(id)arg1 ;
-(id)_placeholderEntryForEntryDescriptor:(id)arg1 ;
-(void)_loadEntryForEntryDescriptor:(id)arg1 ;
-(void)_updateCachedEntry:(id)arg1 forEntryDescriptor:(id)arg2 ;
-(long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2 ;
-(id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2 ;
-(id)combinedEntryForIndexBarControl:(id)arg1 ;
-(long long)numberOfSectionsInIndexBarControl:(id)arg1 ;
-(void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2 ;
-(void)indexBarControlDidSelectBeyondBottom:(id)arg1 ;
-(void)indexBarControlDidSelectBeyondTop:(id)arg1 ;
-(void)reloadCombinedEntryDescriptor;
-(void)reloadEntryDescriptorAtIndexPath:(id)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SKUIIndexBarControlControllerDelegate>)arg1 ;
-(id<SKUIIndexBarControlControllerDelegate>)delegate;
-(void)reloadData;
-(id<SKUIIndexBarControlControllerDataSource>)dataSource;
-(void)setDataSource:(id<SKUIIndexBarControlControllerDataSource>)arg1 ;
-(void)reloadSections:(id)arg1 ;
@end

