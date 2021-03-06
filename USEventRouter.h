/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USDeliveryQueueDelegate.h>

@protocol USEventRouterDelegate;
@class NSDictionary, NSMutableSet, NSOperationQueue, NSArray, NSString;

@interface USEventRouter : NSObject <USDeliveryQueueDelegate> {

	id<USEventRouterDelegate> _delegate;
	NSDictionary* _queueNameToQueues;
	NSDictionary* _eventTypeToRoutes;
	NSMutableSet* _packetRegistry;
	NSOperationQueue* _operationQueue;
	NSArray* _sortedFilters;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (assign,nonatomic,__weak) id<USEventRouterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * queueNameToQueues;                       //@synthesize queueNameToQueues=_queueNameToQueues - In the implementation block
@property (nonatomic,retain) NSDictionary * eventTypeToRoutes;                       //@synthesize eventTypeToRoutes=_eventTypeToRoutes - In the implementation block
@property (nonatomic,retain) NSMutableSet * packetRegistry;                          //@synthesize packetRegistry=_packetRegistry - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSArray * sortedFilters;                                //@synthesize sortedFilters=_sortedFilters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)filterSortingComparator;
+(id)routerWithDispatcherConfiguration:(id)arg1 attributeBuilder:(id)arg2 operationQueue:(id)arg3 dataSender:(id)arg4 ;
-(void)deliveryQueue:(id)arg1 didDeliverPackets:(id)arg2 response:(id)arg3 ;
-(void)deliveryQueue:(id)arg1 didFailPacketsDelivery:(id)arg2 error:(id)arg3 ;
-(id)initWithDispatcherConfiguration:(id)arg1 attributeBuilder:(id)arg2 operationQueue:(id)arg3 dataSender:(id)arg4 ;
-(NSArray *)sortedFilters;
-(NSDictionary *)eventTypeToRoutes;
-(id)routeWithBestMatchForEvent:(id)arg1 ;
-(void)registerPacket:(id)arg1 ;
-(NSDictionary *)queueNameToQueues;
-(NSMutableSet *)packetRegistry;
-(id)itemsFromPackets:(id)arg1 ;
-(void)unregisterPackets:(id)arg1 ;
-(void)routeItem:(id)arg1 ;
-(BOOL)canRouteItem:(id)arg1 ;
-(void)setQueueNameToQueues:(NSDictionary *)arg1 ;
-(void)setEventTypeToRoutes:(NSDictionary *)arg1 ;
-(void)setPacketRegistry:(NSMutableSet *)arg1 ;
-(void)setSortedFilters:(NSArray *)arg1 ;
-(void)setDelegate:(id<USEventRouterDelegate>)arg1 ;
-(id)init;
-(id<USEventRouterDelegate>)delegate;
-(BOOL)isEmpty;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)drain;
-(NSOperationQueue *)operationQueue;
@end

