/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USEventRouterDelegate.h>

@protocol UpsightDataStoreInterface;
@class USDispatcherConfiguration, USDataSender, USEventRouter, NSMutableSet, NSOperationQueue, NSString;

@interface USDispatcher : NSObject <USEventRouterDelegate> {

	BOOL _accumulatingEvents;
	USDispatcherConfiguration* _currentConfiguration;
	id<UpsightDataStoreInterface> _dataStore;
	USDataSender* _dataSender;
	USEventRouter* _eventRouter;
	NSMutableSet* _disposedRouters;
	NSOperationQueue* _operationQueue;
	NSMutableSet* _enqueuedItems;
	unsigned long long _taskIdentifier;

}

@property (nonatomic,readonly) id<UpsightDataStoreInterface> dataStore;                                     //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) USDataSender * dataSender;                                                     //@synthesize dataSender=_dataSender - In the implementation block
@property (nonatomic,retain) USEventRouter * eventRouter;                                                   //@synthesize eventRouter=_eventRouter - In the implementation block
@property (nonatomic,retain) USDispatcherConfiguration * currentConfiguration;                              //@synthesize currentConfiguration=_currentConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableSet * disposedRouters;                                                //@synthesize disposedRouters=_disposedRouters - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                             //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,getter=isAccumulatingEvents,nonatomic) BOOL accumulatingEvents;                           //@synthesize accumulatingEvents=_accumulatingEvents - In the implementation block
@property (nonatomic,retain) NSMutableSet * enqueuedItems;                                                  //@synthesize enqueuedItems=_enqueuedItems - In the implementation block
@property (nonatomic,readonly) unsigned long long minSessionNumberWithNonExpiredConfiguration; 
@property (assign) unsigned long long taskIdentifier;                                                       //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)processResponse:(id)arg1 ;
-(USDataSender *)dataSender;
-(void)setDataSender:(USDataSender *)arg1 ;
-(void)eventRouterDidDrain:(id)arg1 ;
-(void)eventRouter:(id)arg1 didDeliverItems:(id)arg2 response:(id)arg3 ;
-(void)eventRouter:(id)arg1 didFailWithError:(id)arg2 items:(id)arg3 ;
-(void)onDidUpdateEvent:(id)arg1 action:(unsigned long long)arg2 ;
-(void)onDidUpdateConfiguration:(id)arg1 action:(unsigned long long)arg2 ;
-(void)setupEventRouter;
-(void)restoreBatches;
-(USEventRouter *)eventRouter;
-(NSMutableSet *)enqueuedItems;
-(void)setAccumulatingEvents:(BOOL)arg1 ;
-(unsigned long long)minSessionNumberWithNonExpiredConfiguration;
-(NSMutableSet *)disposedRouters;
-(void)setEventRouter:(USEventRouter *)arg1 ;
-(BOOL)enqueueItem:(id)arg1 ;
-(void)unregisterBatchItems:(id)arg1 ;
-(void)processResponseSections:(id)arg1 ;
-(BOOL)isAccumulatingEvents;
-(void)storeResponsesForItems:(id)arg1 error:(id)arg2 ;
-(void)cleanupBatchItems:(id)arg1 ;
-(void)setDisposedRouters:(NSMutableSet *)arg1 ;
-(void)setEnqueuedItems:(NSMutableSet *)arg1 ;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(USDispatcherConfiguration *)currentConfiguration;
-(void)setCurrentConfiguration:(USDispatcherConfiguration *)arg1 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithDataStore:(id)arg1 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(id<UpsightDataStoreInterface>)dataStore;
-(unsigned long long)taskIdentifier;
-(void)endBackgroundTask;
@end
