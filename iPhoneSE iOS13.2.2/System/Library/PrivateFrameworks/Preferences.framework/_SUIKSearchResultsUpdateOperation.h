/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SUIKSearchResultsCollectionViewControllerDelegate;
@class NSArray, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot;

@interface _SUIKSearchResultsUpdateOperation : NSOperation {

	NSArray* _results;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	id<SUIKSearchResultsCollectionViewControllerDelegate> _delegate;
	NSDiffableDataSourceSnapshot* _currentSnapshot;

}

@property (assign,nonatomic,__weak) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewDiffableDataSource * diffableDataSource;                     //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SUIKSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDiffableDataSourceSnapshot * currentSnapshot;                                     //@synthesize currentSnapshot=_currentSnapshot - In the implementation block
-(id<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(NSArray *)results;
-(void)main;
-(void)setResults:(NSArray *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(NSDiffableDataSourceSnapshot *)currentSnapshot;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3 ;
-(void)setCurrentSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
@end
